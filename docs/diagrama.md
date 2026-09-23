# Diagrama de classes — Polimorfismo e Contratos

```mermaid
classDiagram

    class Sensor {
        <<abstract>>
        -tag_ : string
        #Sensor(tag : string)
        +~Sensor()
        +tag() string
        +valor() double*
        +unidade() string*
        +atualizar(leitura : double) bool*
        +emAlerta() bool*
    }

    class SensorNivel {
        -valor_ : double = 50.0
        +SensorNivel(tag : string)
        +valor() double
        +unidade() string
        +atualizar(leitura : double) bool
        +emAlerta() bool
    }

    class SensorTemperatura {
        -valor_ : double = 25.0
        +SensorTemperatura(tag : string)
        +valor() double
        +unidade() string
        +atualizar(leitura : double) bool
        +emAlerta() bool
    }

    class SensorPressao {
        -valor_ : double = 1.0
        +SensorPressao(tag : string)
        +valor() double
        +unidade() string
        +atualizar(leitura : double) bool
        +emAlerta() bool
    }

    class Painel {
        +linhaPainel(sensor : Sensor) string
    }

    Sensor <|-- SensorNivel
    Sensor <|-- SensorTemperatura
    Sensor <|-- SensorPressao

    Painel ..> Sensor : depende do contrato