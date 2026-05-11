// ============================================================
// 函数名称: sub_50d82b
// 虚拟地址: 0x50d82b
// WARP GUID: 025e2052-adb7-59f0-9a00-202df8a0ed42
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_50f0e4, sub_50d79c, sub_50deb4, sub_50d2f4, sub_50dae4, sub_50e8e4, sub_4068a2, sub_50e4b0, sub_511bec, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_50d82b(char* arg1, int32_t arg2, int32_t arg3, char* arg4 @ esi, int32_t* arg5 @ edi)
{
    // 第一条实际指令: *arg5 += 1
    *arg5 += 1
    *arg1 += arg1.b
    *arg4 += arg1:1.b
    int32_t entry_ebx
    int32_t result = entry_ebx + 1
    int32_t result_1 = result
    char* var_a = arg4
    char** esp = &var_a
    
    if (sub_50d79c(arg1) != 0)
        sub_511bec(*data_530454, U"x")
        void* eax_4
        eax_4.b = arg1[0x1b1f6]
        eax_4.b -= 4
        char temp3_1 = eax_4.b
        eax_4.b -= 3
        
        if (temp3_1 u< 3)
            int32_t var_e = 0
            int32_t var_12_1 = 0x3e8
            uint32_t eax_5
            int32_t ecx_1
            eax_5, ecx_1 = GetTickCount()
            int32_t eax_7
            int32_t edx
            edx:eax_7 = sx.q(*(arg1 + 0x1b1fc))
            bool o_1 = unimplemented  {sbb dword [esp+0x4], edx}
            int32_t eax_9
            int32_t edx_2
            eax_9, edx_2 = sub_4068a2(ecx_1, sbb.d(0, edx, eax_5 u< eax_7), eax_5 - eax_7, 0x3e8, var_e)
            
            if (o_1)
                sub_403010()
                noreturn
            
            int32_t eax_11
            int32_t edx_3
            edx_3:eax_11 = sx.q(*(arg1 + 0x44))
            
            if (edx_3 != edx_2)
                esp = &var_e:2
                
                if (edx_3 s< edx_2)
                label_50d8b9:
                    *(arg1 + 0x1b1fc) = GetTickCount()
                    uint32_t eax_14
                    eax_14.b = arg1[0x1b1f6]
                    
                    if (eax_14.b == 4)
                        sub_50f0e4(arg1, 1)
                        sub_50e4b0(arg1, 0)
                    else if (eax_14.b != 5)
                        result = sub_50e8e4(arg1, 1)
                    else
                        *data_530454
                        
                        if (sub_50d2f4() == 0)
                            result = sub_50e8e4(arg1, 1)
                        else
                            sub_50deb4(arg1, 1, arg1)
            else
                esp = &var_e:2
                
                if (eax_11 u< eax_9)
                    goto label_50d8b9
            
            *(*data_530304 + 0x1334) = 1
        
        eax_4.b = arg1[0x1b1f6]
        char temp4_1 = eax_4.b
        eax_4.b -= 6
        
        if (temp4_1 == 6 && arg1[0x1b1f8] != 0)
            uint32_t temp0_1 = divu.dp.d(0:(GetTickCount()), 0x3e8)
            *(esp - 4) = 0
            *(esp - 8) = temp0_1
            int32_t eax_27
            int32_t edx_8
            edx_8:eax_27 = sx.q(*(arg1 + 0x1b1fc))
            int32_t temp8_1 = *(esp - 8)
            *(esp - 8) -= eax_27
            *(esp - 4) = sbb.d(*(esp - 4), edx_8, temp8_1 u< eax_27)
            int32_t eax_28 = *(esp - 8)
            *(esp - 4) = *(esp - 4)
            *(esp - 8) = eax_28
            int32_t eax_30
            int32_t edx_10
            edx_10:eax_30 = sx.q(*(arg1 + 0x44))
            int32_t temp9_1 = *(esp - 4)
            
            if (edx_10 != temp9_1)
                *(esp - 8)
                *(esp - 4)
                
                if (edx_10 s< temp9_1)
                    sub_50dae4()
            else
                *(esp - 8)
                *(esp - 4)
                
                if (eax_30 u< *(esp - 8))
                    sub_50dae4()
    
    *esp
    esp[1]
    esp[2]
    return result
}
