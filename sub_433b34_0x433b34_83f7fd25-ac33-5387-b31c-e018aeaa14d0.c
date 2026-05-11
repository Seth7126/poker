// ============================================================
// 函数名称: sub_433b34
// 虚拟地址: 0x433b34
// WARP GUID: 83f7fd25-ac33-5387-b31c-e018aeaa14d0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_434a1c, sub_42b708, sub_4336a8, sub_40fac8, sub_433ecc, sub_42b1a0, sub_42b71c, sub_43334c, sub_433a30, sub_433480, sub_433d44, sub_433370
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_433b34(int32_t* arg1, int32_t* arg2, char arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    
    if (*(arg2 + 0x47) != 0)
        void* eax = arg1[0xe]
        
        if (eax != 0)
            *(eax + 4) = arg2
            sub_4336a8(eax)
        else
            int32_t* var_44
            
            if (*(arg1[0x19] + 8) != 0)
                void* eax_1
                eax_1.b = arg3
                
                if (eax_1.b == 0)
                    char var_5_1 = 4
                else
                    char temp1_1 = eax_1.b
                    eax_1.b -= 5
                    
                    if (temp1_1 == 5)
                        var_5_1 = 4
                
                sub_433a30(arg1, arg2)
                sub_433a30(arg1, ebp_1[2])
                ebp_1[-2] = 0
                void* eax_19
                eax_19.b = *(ebp_1 - 1)
                eax_19.b = *(eax_19 + 0x52e844)
                *(ebp_1 - 9) = eax_19.b
                int32_t eax_21
                int32_t edx_7
                eax_21, edx_7 = sub_433370(arg1[0x19])
                
                if (eax_21 == 1)
                    void* edi_4 = arg1[0x19]
                    *(edi_4 + 0x10) = *(ebp_1 - 9)
                    char eax_22 = *(ebp_1 - 9)
                    
                    if (eax_22 == 1)
                        *(arg1[0x19] + 0x20) = sub_433480(*(edi_4 + 8), 2)
                        int32_t eax_27
                        eax_27, edx_7 = sub_433480(*(arg1[0x19] + 8), 1)
                        arg1[0x1a] = eax_27
                    else if (eax_22 == 2)
                        *(arg1[0x19] + 0x20) = sub_433480(*(edi_4 + 8), 1)
                        int32_t eax_32
                        eax_32, edx_7 = sub_433480(*(arg1[0x19] + 8), 2)
                        arg1[0x1a] = eax_32
                
                edx_7.b = 1
                void* eax_33 = sub_43334c(sub_428598+0x154, edx_7, arg1)
                *(eax_33 + 4) = arg2
                int32_t* edx_11
                
                if (ebp_1[-2] == 0)
                    edx_11.b = arg1[0x19][4].b
                else
                    edx_11.b = (*(ebp_1[-2] + 0x14))[4].b
                
                if (*(ebp_1 - 9) == 0)
                    *(ebp_1 - 9) = edx_11.b
                
                if (edx_11.b != *(ebp_1 - 9))
                    edx_11.b = *(ebp_1 - 9)
                    var_44 = edx_11
                    void* edx_14
                    edx_14.b = *(ebp_1 - 1)
                    edx_14.b = *(edx_14 + 0x52e84c)
                    sub_433d44(ebp_1[-2], eax_33, arg1, edx_14.b, var_44.b)
                else
                    int32_t* edx_12
                    edx_12.b = *(ebp_1 - 1)
                    edx_12.b = edx_12[0x14ba13].b
                    var_44 = edx_12
                    sub_433ecc(ebp_1[-2], eax_33, arg1, var_44.b)
            else
                (*(*arg1[5] + 0x40))()
                (*(*arg1[5] + 0x84))()
                int32_t var_24
                int32_t var_1c
                int32_t edi_2 = var_1c - var_24
                int32_t var_20
                int32_t var_18
                int32_t* var_14_1 = var_18 - var_20
                
                if (*(arg1[5] + 0x4c) != 0)
                    if (edi_2 == 0)
                        edi_2 = sub_42b71c(arg2)
                    
                    if (var_14_1 == 0)
                        var_14_1 = sub_42b708(arg2)
                
                var_44 = var_14_1
                void var_34
                sub_40fac8(edi_2, var_20, var_24, &var_34, var_44)
                var_44 = arg2
                __builtin_memcpy(&var_24, &var_34, 0x10)
                int32_t* esi_1 = var_44
                (**arg1)()
                sub_42b1a0(esi_1, &var_24)
                int32_t edx_3
                edx_3.b = 1
                void* eax_15 = sub_43334c(sub_428598+0x154, edx_3, arg1)
                void* edx_4 = arg1[0x19]
                *(edx_4 + 8) = eax_15
                *(eax_15 + 0x14) = edx_4
                *(eax_15 + 4) = esi_1
        
        (*(*arg1[5] + 0x74))()
    
    *ebp_1
}
