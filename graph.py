import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

%matplotlib inline
%load_ext autoreload
%autoreload 2

# read the data set given by the output of the C++ code
moment = pd.read_csv ('OutputMoment.csv')
convCTL = pd.read_csv ('OutputConvCTLcsv')

# Build the graph of the Moment
sns.set(style = "whitegrid")
ax = sns.lineplot(moment ['order'], moment ['moment'])
ax.set(xlabel = 'Order of the moment', ylabel= 'Moment', title = 'Moment as a function of the order')
fig = ax.get_figure()
fig.savefig("Moment.png")

# Build the graph of the convergence of tolerance as function of the vector size
tol = np.logspace(0,-2, 100)
sigma = convCTL['sigma'].values
alpha = convCTL['alpha'].values
N = int ((1- alpha/2)*sigma)**2/(np.power(tol,2))

fig, ax = plt.subplots(figsize=(10,5))
sns.set(style = "whitegrid")
ax = sns.lineplot(N, tol)
ax.set(ylabel = 'Threshold of CTL', xlabel= 'Size of the uniform & normal vector', 
       title = 'Convergence of the central limite theorem threshold as a function of N')
fig = ax.get_figure()
fig.savefig("ConvergenceThreshold.png")
