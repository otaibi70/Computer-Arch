import matplotlib.pyplot as plt

versions = ['O0 Dep', 'O0 Ind', 'O3 Dep', 'O3 Ind']
times = [0.169, 0.177, 0, 0]

plt.bar(versions, times)
plt.ylabel("Time (seconds)")
plt.title("Execution Time Comparison")
plt.show()