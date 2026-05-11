// ============================================================
// 函数名称: sub_50d838
// 虚拟地址: 0x50d838
// WARP GUID: af1ea0db-c0ad-54b4-a19c-0e51b8f86e19
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_50f0e4, sub_50d79c, sub_50deb4, sub_50d2f4, sub_50dae4, sub_50e8e4, sub_4068a2, sub_50e4b0, sub_511bec, sub_403010
// [被调用的父级函数]: sub_4dad04
// ============================================================

int32_t __convention("regparm")sub_50d838(int32_t* arg1)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    
    if (sub_50d79c(arg1) != 0)
        sub_511bec(*data_530454, U"x")
        void* eax_4
        eax_4.b = *(arg1 + 0x1b1f6)
        eax_4.b -= 4
        char temp3_1 = eax_4.b
        eax_4.b -= 3
        
        if (temp3_1 u< 3)
            uint32_t eax_5
            int32_t ecx_1
            eax_5, ecx_1 = GetTickCount()
            int32_t eax_7
            int32_t edx_1
            edx_1:eax_7 = sx.q(arg1[0x6c7f])
            bool o_1 = unimplemented  {sbb dword [esp+0x4], edx}
            int32_t eax_9
            int32_t edx_3
            eax_9, edx_3 = sub_4068a2(ecx_1, sbb.d(0, edx_1, eax_5 u< eax_7), eax_5 - eax_7, 0x3e8, 0)
            
            if (o_1)
                sub_403010()
                noreturn
            
            int32_t eax_11
            int32_t edx_4
            edx_4:eax_11 = sx.q(arg1[0x11])
            
            if (edx_4 != edx_3)
                if (edx_4 s< edx_3)
                label_50d8b9:
                    arg1[0x6c7f] = GetTickCount()
                    uint32_t eax_14
                    eax_14.b = *(arg1 + 0x1b1f6)
                    
                    if (eax_14.b == 4)
                        sub_50f0e4(arg1, 1)
                        sub_50e4b0(arg1, 0)
                    else if (eax_14.b != 5)
                        entry_result = sub_50e8e4(arg1, 1)
                    else
                        *data_530454
                        
                        if (sub_50d2f4() == 0)
                            entry_result = sub_50e8e4(arg1, 1)
                        else
                            sub_50deb4(arg1, 1, arg1)
            else if (eax_11 u< eax_9)
                goto label_50d8b9
            
            *(*data_530304 + 0x1334) = 1
        
        eax_4.b = *(arg1 + 0x1b1f6)
        char temp4_1 = eax_4.b
        eax_4.b -= 6
        
        if (temp4_1 == 6 && arg1[0x6c7e].b != 0)
            uint32_t temp0_1 = divu.dp.d(0:(GetTickCount()), 0x3e8)
            int32_t eax_27
            int32_t edx_9
            edx_9:eax_27 = sx.q(arg1[0x6c7f])
            int32_t var_10_2 = sbb.d(0, edx_9, temp0_1 u< eax_27)
            int32_t eax_30
            int32_t edx_11
            edx_11:eax_30 = sx.q(arg1[0x11])
            
            if (edx_11 != var_10_2)
                if (edx_11 s< var_10_2)
                    sub_50dae4()
            else if (eax_30 u< temp0_1 - eax_27)
                sub_50dae4()
    
    return entry_result
}
