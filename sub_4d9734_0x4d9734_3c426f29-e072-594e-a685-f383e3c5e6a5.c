// ============================================================
// 函数名称: sub_4d9734
// 虚拟地址: 0x4d9734
// WARP GUID: 3c426f29-e072-594e-a685-f383e3c5e6a5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402e64
// [被调用的父级函数]: sub_4dd1e0, sub_4dd1d7
// ============================================================

void __fastcallsub_4d9734(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    
    if (arg2 != data_61ccfc)
        return 
    
    for (int32_t i = 1; i != 9; i += 1)
        bool c_1
        
        if (i == 1)
            arg1.b = 0x20
            int32_t var_24
            sub_402e64(&var_24, (data_61cd74).b, arg1.b)
            int32_t eax_2 = data_61cd60
            
            if (eax_2 u<= 0xff)
                var_24 |= 1 << (eax_2 u% 0x20)
            
            int32_t eax_3 = data_61cd68
            
            if (eax_3 u<= 0xff)
                var_24 |= 1 << (eax_3 u% 0x20)
            
            int32_t eax_4 = data_61cd04
            
            if (eax_4 u<= 0xff)
                var_24 |= 1 << (eax_4 u% 0x20)
            
            int32_t eax_5 = data_61cd14
            
            if (eax_5 u<= 0xff)
                var_24 |= 1 << (eax_5 u% 0x20)
            
            int32_t eax_6 = data_61cd28
            
            if (eax_6 u<= 0xff)
                var_24 |= 1 << (eax_6 u% 0x20)
            
            int32_t eax_7 = data_61cd40
            
            if (eax_7 u<= 0xff)
                var_24 |= 1 << (eax_7 u% 0x20)
            
            c_1 = esi u< 0xff
            
            if (esi == 0xff || c_1)
                c_1 = test_bit(var_24, esi)
        
        if (i != 1 || not(c_1))
            bool c_2
            
            if (i == 2)
                arg1.b = 0x20
                int32_t var_44
                sub_402e64(&var_44, (data_61cd64).b, arg1.b)
                int32_t eax_9 = data_61cd6c
                
                if (eax_9 u<= 0xff)
                    var_44 |= 1 << (eax_9 u% 0x20)
                
                int32_t eax_10 = data_61cd08
                
                if (eax_10 u<= 0xff)
                    var_44 |= 1 << (eax_10 u% 0x20)
                
                int32_t eax_11 = data_61cd18
                
                if (eax_11 u<= 0xff)
                    var_44 |= 1 << (eax_11 u% 0x20)
                
                int32_t eax_12 = data_61cd2c
                
                if (eax_12 u<= 0xff)
                    var_44 |= 1 << (eax_12 u% 0x20)
                
                int32_t eax_13 = data_61cd44
                
                if (eax_13 u<= 0xff)
                    var_44 |= 1 << (eax_13 u% 0x20)
                
                c_2 = esi u< 0xff
                
                if (esi == 0xff || c_2)
                    c_2 = test_bit(var_44, esi)
            
            if (i != 2 || not(c_2))
                bool c_3
                
                if (i == 3)
                    arg1.b = 0x20
                    int32_t var_64
                    sub_402e64(&var_64, (data_61cd70).b, arg1.b)
                    int32_t eax_15 = data_61cd0c
                    
                    if (eax_15 u<= 0xff)
                        var_64 |= 1 << (eax_15 u% 0x20)
                    
                    int32_t eax_16 = data_61cd1c
                    
                    if (eax_16 u<= 0xff)
                        var_64 |= 1 << (eax_16 u% 0x20)
                    
                    int32_t eax_17 = data_61cd30
                    
                    if (eax_17 u<= 0xff)
                        var_64 |= 1 << (eax_17 u% 0x20)
                    
                    int32_t eax_18 = data_61cd48
                    
                    if (eax_18 u<= 0xff)
                        var_64 |= 1 << (eax_18 u% 0x20)
                    
                    c_3 = esi u< 0xff
                    
                    if (esi == 0xff || c_3)
                        c_3 = test_bit(var_64, esi)
                
                if (i != 3 || not(c_3))
                    bool c_4
                    
                    if (i == 4)
                        arg1.b = 0x20
                        int32_t var_84
                        sub_402e64(&var_84, (data_61cd10).b, arg1.b)
                        int32_t eax_20 = data_61cd4c
                        
                        if (eax_20 u<= 0xff)
                            var_84 |= 1 << (eax_20 u% 0x20)
                        
                        int32_t eax_21 = data_61cd20
                        
                        if (eax_21 u<= 0xff)
                            var_84 |= 1 << (eax_21 u% 0x20)
                        
                        int32_t eax_22 = data_61cd34
                        
                        if (eax_22 u<= 0xff)
                            var_84 |= 1 << (eax_22 u% 0x20)
                        
                        c_4 = esi u< 0xff
                        
                        if (esi == 0xff || c_4)
                            c_4 = test_bit(var_84, esi)
                    
                    if (i != 4 || not(c_4))
                        bool c_5
                        
                        if (i == 5)
                            arg1.b = 0x20
                            int32_t var_a4
                            sub_402e64(&var_a4, (data_61cd50).b, arg1.b)
                            int32_t eax_24 = data_61cd24
                            
                            if (eax_24 u<= 0xff)
                                var_a4 |= 1 << (eax_24 u% 0x20)
                            
                            int32_t eax_25 = data_61cd38
                            
                            if (eax_25 u<= 0xff)
                                var_a4 |= 1 << (eax_25 u% 0x20)
                            
                            c_5 = esi u< 0xff
                            
                            if (esi == 0xff || c_5)
                                c_5 = test_bit(var_a4, esi)
                        
                        if (i != 5 || not(c_5))
                            bool c_6
                            
                            if (i == 6)
                                arg1.b = 0x20
                                int32_t var_c4
                                sub_402e64(&var_c4, (data_61cd54).b, arg1.b)
                                int32_t eax_27 = data_61cd3c
                                
                                if (eax_27 u<= 0xff)
                                    var_c4 |= 1 << (eax_27 u% 0x20)
                                
                                c_6 = esi u< 0xff
                                
                                if (esi == 0xff || c_6)
                                    c_6 = test_bit(var_c4, esi)
                            
                            if (i != 6 || not(c_6))
                                bool c_7
                                
                                if (i == 7)
                                    arg1.b = 0x20
                                    int32_t var_e4
                                    sub_402e64(&var_e4, (data_61cd58).b, arg1.b)
                                    c_7 = esi u< 0xff
                                    
                                    if (esi == 0xff || c_7)
                                        c_7 = test_bit(var_e4, esi)
                                
                                if ((i != 7 || not(c_7)) && i == 8)
                                    arg1.b = 0x20
                                    int32_t var_104
                                    sub_402e64(&var_104, (data_61cd5c).b, arg1.b)
}
