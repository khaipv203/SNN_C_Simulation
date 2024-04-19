#include<stdio.h>
#include<stdint.h>

    struct num_256b{
        uint32_t num1, num2, num3, num4, num5, num6, num7, num8;
    };
    typedef struct num_256b num_256b;

    struct packet{
        int16_t dx, dy : 9;
        uint8_t axon_destination;
        uint8_t tick_ins : 4;
    };
    typedef struct packet packet;

    struct neuron_param{
        int16_t weight_1, weight_2, weight_3, weight_4 : 9;
        int16_t current_potential : 9;
        int16_t rst_value : 9;
        int16_t p_threshold, n_threshold : 9;
        int16_t leak_value : 9;
        packet packet_param;
        uint8_t rst_mode : 1;
        num_256b synapse_connections;
    };
    typedef struct neuron_param neuron_param;

    struct CSRAM{
        neuron_param param[256];
    };
    typedef struct CSRAM CSRAM;
    