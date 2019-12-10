import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns


#Read the data set given by the output of the C++ code
moment = pd.read_csv ('OutputMoment.csv')
convCTL = pd.read_csv ('OutputConvergence.csv')

# Plot graph of the Moment
sns.set(style = "whitegrid")
ax = sns.lineplot(moment ['order'], moment ['moment'])

# Add legend, title and labels
ax.set(xlabel = 'Order of the moment', ylabel= 'Moment', title = 'Moment as a function of the order')

# Save the figure
fig = ax.get_figure()
fig.savefig("Moment.png")

# Build the graph of the convergence of tolerance as function of the vector size
N = convCTL['Index'].values
fig, ax = plt.subplots(figsize=(10,5))

sns.set(style = "whitegrid")

# Plot the lower bound, upper bound, desired mean and computed mean of the central limit theorem
ax = sns.lineplot(N, convCTL['LowerBound'])
ax = sns.lineplot(N, convCTL['UpperBound'])
ax = sns.lineplot(N, convCTL['mcmean'])

# Add legend, title and labels
ax.legend(['LowerBound','UpperBound', 'Mean of the vector'])
ax.set(ylabel = 'Central limit mean values', xlabel= 'Size of the uniform & normal vector',
title = 'Convergence of the central limite theorem values as a function of N')

# Save the figure
fig = ax.get_figure()
fig.savefig("Convergence.png")
