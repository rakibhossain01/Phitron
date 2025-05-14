class CPU:
    def __init__(self, cores) -> None:
        self.cores = cores

class RAM:
    def __init__(self, size) -> None:
        self.size = size

class HardDrive:
    def __init__(self, capacity) -> None:
        self.capacity = capacity

# Composition: Computer is composed of CPU, RAM, and HardDrive
class Computer:
    def __init__(self, cores, ram_size, hd_capacity) -> None:
        self.cpu = CPU(cores)
        self.ram = RAM(ram_size)
        self.hard_disc = HardDrive(hd_capacity)

# Creating a Computer instance
mac = Computer(8, 16, 512)

# Accessing its components
print(f"Mac CPU Cores: {mac.cpu.cores}")
print(f"Mac RAM Size: {mac.ram.size}GB")
print(f"Mac Hard Drive Capacity: {mac.hard_disc.capacity}GB")
