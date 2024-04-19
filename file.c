#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdint.h>
#include "test.c"
  uint32_t binaryToDecimal(char *binary) {
        int length = strlen(binary);
        uint32_t result = 0;
        for (int i = 0; i < length; i++) {
            result = result + pow(2, length-i-1)*(binary[i] - '0');
        }
    return result;
}
int binaryToSignedDecimal(const char *bit_string) {
  int length = strlen(bit_string);
        int result = 0;
        for (int i = 0; i < length; i++) {
            if(i == 0) {
              result = result - pow(2, length-i-1)*(bit_string[i] - '0');
            }
            else{ 
            result = result + pow(2, length-i-1)*(bit_string[i] - '0');
            }
        }
    return result;
}

 FILE *file;
    char data[369]; // Định nghĩa mảng để lưu trữ dữ liệu đọc được từ file
    char connection_1[33];
    char connection_2[33];
    char connection_3[33];
    char connection_4[33];
    char connection_5[33];
    char connection_6[33];
    char connection_7[33];
    char connection_8[33];
    char weight_1[10];
    char weight_2[10];
    char weight_3[10];
    char weight_4[10];
    char current_potential[10];
    char rst_value[10];
    char p_threshold[10];
    char n_threshold[10];
    char leak_value[10];
    char dx[10];
    char dy[10];
    char axon_destination[9];
    char tick_ins[5];
    char rst_mode[2];
///////////////////////////////////////////////
    uint32_t num1, num2, num3, num4, num5, num6, num7, num8;
    int16_t Dx, Dy;
    uint8_t Axon_destination;
    uint8_t Tick_ins;
    int16_t Weight_1, Weight_2, Weight_3, Weight_4;
    int16_t Current_potential;
    int16_t Rst_value;
    int16_t P_threshold, N_threshold;
    int16_t Leak_value;
    uint8_t Rst_mode;
/////////////////////////////////////////////
        
int main() {
        connection_1[32] = '\0';
        connection_2[32] = '\0';
        connection_3[32] = '\0';
        connection_4[32] = '\0';
        connection_5[32] = '\0';
        connection_6[32] = '\0';
        connection_7[32] = '\0';
        connection_8[32] = '\0';
        current_potential[9] = '\0';
        rst_value[9] = '\0';
        weight_1[9] = '\0';
        weight_2[9] = '\0';
        weight_3[9] = '\0';
        weight_4[9] = '\0';
        leak_value[9] = '\0';
        p_threshold[9] = '\0';
        n_threshold[9] = '\0';
        dx[9] = '\0';
        dy[9] = '\0';
        axon_destination[8] = '\0';
        tick_ins[4] = '\0';
        rst_mode[1] = '\0';
    // Mở tệp để đọc
    file = fopen("csram_000.mem", "r");
    
    // Kiểm tra xem tệp có tồn tại không
    if (file == NULL) {
        printf("Không thể mở tệp.\n");
        return 1; // Kết thúc chương trình với mã lỗi
    }
    CSRAM CSRAM_000;
    // Đọc dữ liệu từ tệp và hiển thị nó
    for(int i = 0; i<511; ++i) {
        //printf("%s", data);
    fgets(data, sizeof(data), file);
        //connection[256] = '\0';
    strncpy(connection_1, data, 32);
    strncpy(connection_2, data+32, 32);
    strncpy(connection_3, data+64, 32);
    strncpy(connection_4, data+96, 32);
    strncpy(connection_5, data+128, 32);
    strncpy(connection_6, data+160, 32);
    strncpy(connection_7, data+192, 32);
    strncpy(connection_8, data+224, 32);
    strncpy(current_potential, data+256, 9);
    strncpy(rst_value, data+265, 9);
    strncpy(weight_1, data+274, 9);
    strncpy(weight_2, data+283, 9);
    strncpy(weight_3, data+292, 9);
    strncpy(weight_4, data+301, 9);
    strncpy(leak_value, data+310, 9);
    strncpy(p_threshold, data+319, 9);
    strncpy(n_threshold, data+328, 9);
    strncpy(rst_mode, data+337, 1);
    strncpy(dx, data+338, 9);
    strncpy(dy, data+347, 9);
    strncpy(axon_destination, data+356, 8);
    strncpy(tick_ins, data+364, 4);
    // Đóng tệp
    // printf("%s\n", data);
    // printf("%s\n", connection_1);
    // printf("%s\n", connection_2);
    // printf("%s\n", connection_3);
    // printf("%s\n", connection_4);
    // printf("%s\n", connection_5);
    // printf("%s\n", connection_6);
    // printf("%s\n", connection_7);
    // printf("%s\n", connection_8);
    // printf("%s\n", current_potential);
    // printf("%s\n", rst_value);
    // printf("%s\n", weight_1);
    // printf("%s\n", weight_2);
    // printf("%s\n", weight_3);
    // printf("%s\n", weight_4);
    // printf("%s\n", leak_value);
    // printf("%s\n", p_threshold);
    // printf("%s\n", n_threshold);
    // printf("%s\n", rst_mode);
    // printf("%s\n", dx);
    // printf("%s\n", dy);
    // printf("%s\n", axon_destination);
    // printf("%s\n", tick_ins);
/////////////////////////////////////////////////////
    num1 = binaryToDecimal(connection_1); 
    num2 = binaryToDecimal(connection_2); 
    num3 = binaryToDecimal(connection_3); 
    num4 = binaryToDecimal(connection_4);
    num5 = binaryToDecimal(connection_5);
    num6 = binaryToDecimal(connection_6);
    num7 = binaryToDecimal(connection_7);
    num8 = binaryToDecimal(connection_8);
    Dx = binaryToSignedDecimal(dx); 
    Dy = binaryToSignedDecimal(dy);
    Axon_destination = binaryToSignedDecimal(axon_destination);
    Tick_ins = binaryToSignedDecimal(tick_ins);
    Weight_1 = binaryToSignedDecimal(weight_1);
    Weight_2 = binaryToSignedDecimal(weight_2);
    Weight_3 = binaryToSignedDecimal(weight_3); 
    Weight_4 = binaryToSignedDecimal(weight_4);
    Current_potential = binaryToSignedDecimal(current_potential);
    Rst_value = binaryToSignedDecimal(rst_value);
    P_threshold = binaryToSignedDecimal(p_threshold); 
    N_threshold = binaryToSignedDecimal(n_threshold);
    Leak_value = binaryToSignedDecimal(leak_value);
    Rst_mode = binaryToSignedDecimal(rst_mode);
    ////////////////////////////////////////////
    // neuron_param myneuron;
    // myneuron.synapse_connections.num1 = num1;
    // myneuron.synapse_connections.num2 = num2;
    // myneuron.synapse_connections.num3 = num3;
    // myneuron.synapse_connections.num4 = num4;
    // myneuron.synapse_connections.num5 = num5;
    // myneuron.synapse_connections.num6 = num6;
    // myneuron.synapse_connections.num7 = num7;
    // myneuron.synapse_connections.num8 = num8;
    // myneuron.packet_param.dx = Dx;
    // myneuron.packet_param.dy = Dy;
    // myneuron.packet_param.axon_destination = Axon_destination;
    // myneuron.packet_param.tick_ins = Tick_ins;
    // myneuron.weight_1 = Weight_1;
    // myneuron.weight_2 = Weight_2;
    // myneuron.weight_3 = Weight_3;
    // myneuron.weight_4 = Weight_4;
    // myneuron.current_potential = Current_potential;
    // myneuron.rst_value = Rst_value;
    // myneuron.p_threshold = P_threshold;
    // myneuron.n_threshold = N_threshold;
    // myneuron.leak_value = Leak_value;
    // myneuron.rst_mode = Rst_mode;
/////////////////////////////////////////////////////
if(i%2 == 0){ 
    CSRAM_000.param[i/2].synapse_connections.num1 = num1;
    CSRAM_000.param[i/2].synapse_connections.num2 = num2;
    CSRAM_000.param[i/2].synapse_connections.num3 = num3;
    CSRAM_000.param[i/2].synapse_connections.num4 = num4;
    CSRAM_000.param[i/2].synapse_connections.num5 = num5;
    CSRAM_000.param[i/2].synapse_connections.num6 = num6;
    CSRAM_000.param[i/2].synapse_connections.num7 = num7;
    CSRAM_000.param[i/2].synapse_connections.num8 = num8;
    CSRAM_000.param[i/2].packet_param.dx = Dx;
    CSRAM_000.param[i/2].packet_param.dy = Dy;
    CSRAM_000.param[i/2].packet_param.axon_destination = Axon_destination;
    CSRAM_000.param[i/2].packet_param.tick_ins = Tick_ins;
    CSRAM_000.param[i/2].weight_1 = Weight_1;
    CSRAM_000.param[i/2].weight_2 = Weight_2;
    CSRAM_000.param[i/2].weight_3 = Weight_3;
    CSRAM_000.param[i/2].weight_4 = Weight_4;
    CSRAM_000.param[i/2].current_potential = Current_potential;
    CSRAM_000.param[i/2].rst_value = Rst_value;
    CSRAM_000.param[i/2].p_threshold = P_threshold;
    CSRAM_000.param[i/2].n_threshold = N_threshold;
    CSRAM_000.param[i/2].leak_value = Leak_value;
    CSRAM_000.param[i/2].rst_mode = Rst_mode;
}



    //////////////////////////////////////////////
    // printf("%d\n", myneuron.synapse_connections.num1);
    // printf("%d\n", myneuron.synapse_connections.num2);
    // printf("%d\n", myneuron.synapse_connections.num3);
    // printf("%d\n", myneuron.synapse_connections.num4);
    // printf("%d\n", myneuron.synapse_connections.num5);
    // printf("%d\n", myneuron.synapse_connections.num6);
    // printf("%d\n", myneuron.synapse_connections.num7);
    // printf("%d\n", myneuron.synapse_connections.num8);
    // printf("%d\n", Current_potential);
    // printf("%d\n", Rst_value);
    // printf("%d\n", myneuron.weight_1);
    // printf("%d\n", myneuron.weight_2);
    // printf("%d\n", myneuron.weight_3);
    // printf("%d\n", myneuron.weight_4);
    // printf("%d\n", Leak_value);
    // printf("%d\n", P_threshold);
    // printf("%d\n", N_threshold);
    // printf("%d\n", Rst_mode);
    // printf("%d\n", myneuron.packet_param.dx);
    // printf("%d\n", myneuron.packet_param.dy);
    // printf("%d\n", Axon_destination);
    // printf("%d\n", Tick_ins);
    
    if(i == 510) printf("done\n");
    
    }
    fclose(file);
  for(int i=0; i<256; i++)
  printf("%d\n", CSRAM_000.param[i].packet_param.axon_destination);
    return 0; // Kết thúc chương trình mà không có lỗi
}
