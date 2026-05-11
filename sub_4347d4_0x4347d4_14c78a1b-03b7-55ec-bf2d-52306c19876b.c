// ============================================================
// 函数名称: sub_4347d4
// 虚拟地址: 0x4347d4
// WARP GUID: 14c78a1b-03b7-55ec-bf2d-52306c19876b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: MapWindowPoints
// [内部子函数调用]: sub_40fac8, sub_4318d0, sub_42b220, sub_42b1dc, sub_40faac, sub_43025c
// [被调用的父级函数]: 无
// ============================================================

int32_t __thiscallsub_4347d4(void* arg1, uint32_t arg2 @ eax, POINT* arg3, char arg4)
{
    // 第一条实际指令: int32_t eax_1 = sub_43025c(*(arg2 + 0x14))
    int32_t eax_1 = sub_43025c(*(arg2 + 0x14))
    uint32_t cPoints
    uint32_t cPoints_2
    void var_20
    
    if (arg1 == 0 || *(arg1 + 0x8c) == 0 || eax_1 s< 2)
        cPoints = sub_42b220(*(arg2 + 0x14))
        sub_40faac(sub_42b1dc(*(arg2 + 0x14)), 0, 0, &var_20, cPoints)
        cPoints = arg2
        __builtin_memcpy(arg3, &var_20, 0x10)
        cPoints_2 = cPoints
        
        if (eax_1 s> 0)
            POINT* eax_6
            eax_6.b = arg4
            char temp2_1 = eax_6.b
            eax_6.b -= 1
            
            if (temp2_1 == 1)
                int32_t eax_14 = arg3->__offset(0xc).d
                int32_t eax_15 = eax_14 s>> 1
                bool c_3 = unimplemented  {sar eax, 0x1}
                
                if (eax_14 s>> 1 s< 0)
                    eax_15 = adc.d(eax_15, 0, c_3)
                
                arg3->__offset(0xc).d = eax_15
            else
                char temp6_1 = eax_6.b
                eax_6.b -= 1
                
                if (temp6_1 == 1)
                    int32_t eax_17 = arg3->__offset(0xc).d
                    int32_t eax_18 = eax_17 s>> 1
                    bool c_4 = unimplemented  {sar eax, 0x1}
                    
                    if (eax_17 s>> 1 s< 0)
                        eax_18 = adc.d(eax_18, 0, c_4)
                    
                    arg3->y = eax_18
                else
                    char temp10_1 = eax_6.b
                    eax_6.b -= 1
                    
                    if (temp10_1 == 1)
                        int32_t eax_8 = arg3->__offset(0x8).d
                        int32_t eax_9 = eax_8 s>> 1
                        bool c_1 = unimplemented  {sar eax, 0x1}
                        
                        if (eax_8 s>> 1 s< 0)
                            eax_9 = adc.d(eax_9, 0, c_1)
                        
                        arg3->__offset(0x8).d = eax_9
                    else
                        char temp13_1 = eax_6.b
                        eax_6.b -= 1
                        
                        if (temp13_1 == 1)
                            int32_t eax_11 = arg3->__offset(0x8).d
                            int32_t eax_12 = eax_11 s>> 1
                            bool c_2 = unimplemented  {sar eax, 0x1}
                            
                            if (eax_11 s>> 1 s< 0)
                                eax_12 = adc.d(eax_12, 0, c_2)
                            
                            arg3->x = eax_12
    else
        int32_t var_8_1 = *(arg1 + 0x30)
        int32_t var_c_1 = *(arg1 + 0x34)
        uint32_t cPoints_3 = *(arg1 + 0x38)
        uint32_t cPoints_4 = cPoints_3
        uint32_t cPoints_1 = *(arg1 + 0x3c)
        uint32_t edx_5
        edx_5.b = arg4
        edx_5.b -= 3
        char temp1_1 = edx_5.b
        edx_5.b -= 2
        
        if (temp1_1 u>= 2)
            cPoints_3.b = arg4
            char temp3_1 = (cPoints_3 - 1).b
            cPoints_3.b = (cPoints_3 - 1).b - 2
            
            if (temp3_1 u< 2)
                int32_t eax_21 = *(arg1 + 0x3c)
                cPoints_3 = eax_21 s>> 1
                bool c_6 = unimplemented  {sar eax, 0x1}
                
                if (eax_21 s>> 1 s< 0)
                    cPoints_3 = adc.d(cPoints_3, 0, c_6)
                
                cPoints_1 = cPoints_3
        else
            cPoints_4 = cPoints_3 s>> 1
            bool c_5 = unimplemented  {sar edi, 0x1}
            
            if (cPoints_3 s>> 1 s< 0)
                cPoints_4 = adc.d(cPoints_4, 0, c_5)
        
        cPoints_3.b = arg4
        char temp7_1 = cPoints_3.b
        cPoints_3.b -= 2
        
        if (temp7_1 == 2)
            var_c_1 += cPoints_1
        else
            char temp11_1 = cPoints_3.b
            cPoints_3.b -= 2
            
            if (temp11_1 == 2)
                var_8_1 += cPoints_4
        
        cPoints = cPoints_1
        sub_40fac8(cPoints_4, var_c_1, var_8_1, &var_20, cPoints)
        cPoints = arg2
        __builtin_memcpy(arg3, &var_20, 0x10)
        cPoints_2 = cPoints
    cPoints = 2
    return MapWindowPoints(sub_4318d0(*(cPoints_2 + 0x14)), nullptr, arg3, cPoints)
}
