# QT-Graph_Visulizer


Graph Visualizer is a Qt-based application that lets you generate and interact with graphs. With this tool, you can create an undirected graph based on user-specified parameters (number of nodes and density) and perform operations such as displaying node degrees, finding neighbors, and showing the full adjacency matrix—all while visualizing the graph using a custom QGraphicsView.

## Features

- **Graph Generation:**  
  Generate a graph with a specified number of nodes and edge density.
  
- **Graph Visualization:**  
  Visualize the graph using a custom circular layout.
  
- **Graph Operations:**  
  - Display the degree of a selected node.
  - Find the node with the maximum degree.
  - Find the node with the minimum degree.
  - Retrieve and display the neighbors of a node.
  - Show the raw adjacency matrix.

- **Custom UI:**  
  Clean and modern UI design with custom styling using Qt Widgets.

## QT Project Structure 

```
Graph_Visualizer/
├── Header Files/
│   ├── graph.h
│   ├── graphwidget.h
│   └── mainwindow.h
├── Source Files/
│   ├── graph.cpp
│   ├── graphwidget.cpp
│   ├── mainwindow.cpp
│   └── main.cpp
├── Forms/
│   └── mainwindow.ui
├── CMakeLists.txt   (or Graph_Visualizer.pro for qmake projects)
└── README.md
```

## Requirements

- **Qt 5 or Qt 6:**  
  (Tested on Qt 6.8.2 with MinGW 64-bit)
  
- **C++ Compiler:**  
  MinGW on Windows, or equivalent on Linux/macOS.
  
- **Build System:**  
  Either CMake or qmake (Qt Creator can build both).

## Building and Running

### Using CMake

1. **Clone the Repository:**

   ```bash
   git clone https://github.com/Muazzam-Shah/QT-Graph_Visulizer.git
   cd QT-Graph_Visulizer
   ```

2. **Create a Build Directory and Run CMake:**

   ```bash
   mkdir build
   cd build
   cmake ..
   cmake --build .
   ```

3. **Run the Application:**

   - On Windows: Run `QT-Graph_Visulizer.exe`
   - On Linux/macOS: Run `./QT-Graph_Visulizer`

### Using Qt Creator (qmake)

1. Open the project in Qt Creator by opening the `.pro` file (if using qmake) or `CMakeLists.txt` (if using CMake).
2. Configure the project with your desired kit.
3. Build and run the project from within Qt Creator.

## Usage

1. **Set Graph Parameters:**  
   - Use the **Number of Nodes** (QSpinBox) and **Graph Density** (QDoubleSpinBox) inputs to set your graph parameters.

2. **Generate Graph:**  
   - Click the **Generate Graph** button to create and display the graph.

3. **Interact with the Graph:**  
   - Use the provided buttons to:
     - **Show Node Degree:** Enter a node index to display its degree.
     - **Maximum Degree:** Identify the node with the highest degree.
     - **Minimum Degree:** Identify the node with the lowest degree.
     - **Find Neighbors:** Display the neighbors of a given node.
     - **Display Adjacency Matrix:** View the raw adjacency matrix of the graph.
