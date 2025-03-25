# DISEÑO Y ANÁLISIS DE ALGORITMOS

## Algoritmos constructivos y búsquedas por entornos  
**Vehicle Routing Problem with Transshipments for Solid Waste Collection with Transfer Stations (VRPT-SWTS)**  
**Martín José Marrero Quintans**  
**Curso 2024-2025**

### Objetivo
Proponer, implementar y evaluar algoritmos constructivos y búsquedas por entornos para el Vehicle Routing Problem with Transshipments for Solid Waste Collection with Transfer Stations (VRPT-SWTS).

### Tareas
Además de las tareas descritas en el presente documento, los estudiantes tendrán que realizar las modificaciones que se planteen durante la defensa final de la práctica.

### Entregas parciales y modificación final
- **Entrega parcial 1 (25 de marzo - 1 de abril):** Voraz y fase constructiva de GRASP.  
- **Entrega parcial 2 (8 de abril):** GRASP con búsquedas locales.  
- **Entrega final y defensa (22 de abril):** Práctica completa (incluye GVNS) e informe en LaTeX (Overleaf).

### Evaluaciones parciales
- **Código fuente y defensa del trabajo realizado:** Hasta 10 puntos. Si el día de la corrección falta algún código o este es incorrecto, la práctica se calificará como No Apta.

### Evaluación final
- **Código fuente y memoria:** Hasta 4 puntos. Si el día de la corrección falta algún código o este es incorrecto, la práctica se calificará como No Apta.  
- **Modificación propuesta el día de la corrección:** Hasta 4 puntos. Será necesario realizar la modificación para superar la práctica.  
- **Defensa oral de la práctica:** Hasta 2 puntos.

### Lenguaje de programación
Java o C++.

### Ponderación de notas de las tres entregas
Las defensas parciales supondrán un 25 % de la nota final de la práctica, 12.5 % cada una de ellas.

---

## Vehicle Routing Problem with Transshipments for Solid Waste Collection with Transfer Stations (VRPT-SWTS)

En esta práctica estudiaremos un Problema de Rutas de Vehículos con Trasbordos para la recogida de residuos sólidos con estaciones de transferencia (VRPT-SWTS) basado en Ghiani et al., 2021. Este problema optimiza la recolección de residuos sólidos urbanos considerando estaciones de transferencia intermedias (Solid Waste Transfer Stations, SWTS).

### Descripción del problema
Debido a regulaciones ambientales más estrictas y al aumento de la distancia de los vertederos respecto a los centros urbanos, se incentiva el uso de estaciones de transferencia. En estas estaciones, los residuos son transferidos de vehículos de recolección pequeños (Collection Vehicles, CV) a vehículos de transporte de mayor capacidad (Transportation Vehicles, TV).

El problema se modela como un **Vehicle Routing Problem with Transshipment (VRPT)**, descompuesto en dos fases:  
1. **Fase de recolección:** Diseñar rutas para los CV, asegurando que visiten los puntos de recolección asignados y transfieran su carga en una SWTS antes de regresar al depósito.  
2. **Fase de transporte:** Diseñar rutas para los TV, sincronizando su llegada con los CV en las SWTS y transportando los residuos al vertedero.

### Desafíos
El problema introduce desafíos adicionales respecto al VRP clásico, como la coordinación entre diferentes tipos de vehículos y la gestión eficiente del transbordo de carga en las estaciones de transferencia. El objetivo es minimizar el número de vehículos utilizados.

---

## Algoritmos Heurísticos y Metaheurísticos

### Algoritmo voraz para construir las rutas de los vehículos de recolección (Algorithm 1)
Este algoritmo constructivo voraz genera rutas de recolección de manera eficiente, evitando resolver el problema de forma exacta.  
**Pasos principales:**
1. **Inicio de una nueva ruta:** Crear una ruta desde el depósito con capacidad y tiempo máximos.  
2. **Asignación de zonas de recolección:** Seleccionar la zona más cercana y añadirla si no excede la capacidad o tiempo.  
3. **Finalización de la ruta:** Asegurar que la última parada sea una SWTS antes de regresar al depósito.

### Algoritmo constructivo para generar las rutas de los vehículos de transporte (Algorithm 2)
Este algoritmo asigna tareas a los vehículos de transporte, garantizando eficiencia y sincronización con los vehículos de recolección.  
**Pasos principales:**
1. Ordenar las tareas por tiempo de llegada.  
2. Asignar tareas a vehículos disponibles o crear nuevos vehículos si es necesario.  
3. Asegurar que todas las rutas terminan en el vertedero.

### Algoritmo para seleccionar el mejor vehículo para una tarea (Algorithm 3)
Determina el vehículo de transporte más adecuado para una tarea, minimizando el costo de inserción y cumpliendo restricciones.

---

## Implementación

### Tareas
1. Diseñar e implementar los algoritmos constructivos voraces (Algorithms 1, 2 y 3).  
2. Implementar un algoritmo GRASP (fase constructiva).  
3. Diseñar un Método Multiarranque con estructuras de entorno (reinserción, intercambio, 2-opt).  
4. Implementar una Búsqueda por Entorno Variable General (GVNS).

### Qué debe presentar el alumno
1. **Código fuente:** Debidamente comentado y ejecutable.  
2. **Memoria en LaTeX:** Descripción de algoritmos, estructuras de datos y entorno.  
3. **Resultados:** Tablas o gráficas que muestren el comportamiento de los algoritmos.

## Pseudocódigo de los algoritmos

### Algorithm 1: A Constructive Heuristic for Collection Vehicle Routes
```plaintext
Require: The set of collection zones C, the waste quantity dc for each c ∈ C, vehicle capacity Q, maximum route duration L, the set of SWTS S.
Ensure: A set K of collection vehicles.
1: K ← ∅
2: k ← 1
...
35: return K
```

### Algorithm 2: A Constructive Heuristic for Transportation Vehicle Routes
```plaintext
Require: The set of tasks H, transportation vehicle capacity Q′, maximum route duration L′.
Ensure: A set E of transportation vehicles.
1: Sort H in ascending order of arrival time τh.
...
29: return E
```

### Algorithm 3: Selecting the Best Vehicle for a Task
```plaintext
Require: Set of vehicles E, task h.
Ensure: Vehicle e to which the task is assigned.
1: e ← null
...
10: return e
```
