// ============================================================
// 函数名称: sub_441400
// 虚拟地址: 0x441400
// WARP GUID: aa50e233-c675-5663-81f1-d02443139d47
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: Sleep
// [内部子函数调用]: sub_4077a0, sub_441308, sub_441770, sub_4413a0
// [被调用的父级函数]: sub_4421f4, sub_4421d0
// ============================================================

int32_t __convention("regparm")sub_441400(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int16_t temp2_1
    int16_t temp2_1
    
    if (*(arg1 + 0x1f) != 0)
        int32_t eax_1
        eax_1.w = *(arg2 + 4)
        temp2_1 = eax_1.w
        eax_1.w -= 4
    
    int32_t result
    
    if (*(arg1 + 0x1f) == 0 || temp2_1 u>= 4)
        result = sx.d(*(arg2 + 4))
        int32_t __saved_ebp
        
        switch (result)
            case 0
                return sub_441770(arg1, *(arg1 + 0xc) - zx.d(*(arg1 + 8)))
            case 1
                return sub_441770(arg1, *(arg1 + 0xc) + zx.d(*(arg1 + 8)))
            case 2
                arg2.b = 1
                int32_t eax_48 = sub_441308(arg1)
                return sub_441770(arg1, *(arg1 + 0xc) - eax_48)
            case 3
                arg2.b = 1
                return sub_441770(arg1, sub_441308(arg1) + *(arg1 + 0xc))
            case 4
                if (*(arg1 + 0x14) s<= 0x7fff)
                    return sub_441770(arg1, sx.d(*(arg2 + 6)))
                
                return sub_441770(arg1, sub_4413a0(&__saved_ebp))
            case 5
                result = arg1
                
                if (*(result + 0x1d) != 0)
                    if (*(arg1 + 0x14) s<= 0x7fff)
                        return sub_441770(arg1, sx.d(*(arg2 + 6)))
                    
                    return sub_441770(arg1, sub_4413a0(&__saved_ebp))
            case 6
                return sub_441770(arg1, 0)
            case 7
                return sub_441770(arg1, *(arg1 + 0x14))
    else
        int32_t eax_2
        eax_2.w = *(arg2 + 4)
        int16_t temp3_1 = eax_2.w
        eax_2.w -= 2
        int32_t var_14_1
        int32_t result_1
        int32_t i
        
        if (temp3_1 u< 2)
            uint32_t ebx_1 = zx.d(*(arg1 + 8))
            int32_t i_1 = *(arg1 + 0x40)
            result_1 = divs.dp.d(sx.q(ebx_1), i_1)
            int32_t eax_8
            int32_t edx_2
            edx_2:eax_8 = sx.q(ebx_1)
            result = divs.dp.d(edx_2:eax_8, i_1)
            var_14_1 = mods.dp.d(edx_2:eax_8, i_1)
            i = i_1
        else
            int16_t temp4_1 = eax_2.w
            eax_2.w -= 2
            
            if (temp4_1 u< 2)
                uint32_t eax_10 = zx.d(*(arg1 + 0xa))
                int32_t i_2 = *(arg1 + 0x3c)
                var_14_1 = mods.dp.d(sx.q(eax_10), i_2)
                result = divs.dp.d(sx.q(eax_10), i_2)
                result_1 = result
                i = i_2
            else
                i = 0
                result_1 = 0
                result = 0
                var_14_1 = 0
        
        uint32_t edi_1 = 0
        
        for (; i s> 0; i -= 1)
            uint32_t eax_16 = sub_4077a0()
            uint32_t eax_18 = eax_16 - edi_1
            int32_t edx_9 = *(arg1 + 0x20)
            
            if (eax_18 s< edx_9)
                Sleep(edx_9 - eax_18)
            
            edi_1 = eax_16
            int32_t eax_19
            eax_19.w = *(arg2 + 4)
            int16_t temp6_1 = eax_19.w
            eax_19.w -= 1
            
            if (temp6_1 u< 1)
                sub_441770(arg1, *(arg1 + 0xc) - result_1)
            else if (temp6_1 == 1)
                sub_441770(arg1, *(arg1 + 0xc) + result_1)
            else
                int16_t temp8_1 = eax_19.w
                eax_19.w -= 1
                
                if (temp8_1 == 1)
                    sub_441770(arg1, *(arg1 + 0xc) - result_1)
                else
                    int16_t temp10_1 = eax_19.w
                    eax_19.w -= 1
                    
                    if (temp10_1 == 1)
                        sub_441770(arg1, *(arg1 + 0xc) + result_1)
            
            result = (*(**(arg1 + 4) + 0x80))()
        
        if (var_14_1 s> 0)
            result.w = *(arg2 + 4)
            int16_t temp5_1 = result.w
            result.w -= 1
            
            if (temp5_1 u< 1)
                return sub_441770(arg1, *(arg1 + 0xc) - var_14_1)
            
            if (temp5_1 == 1)
                return sub_441770(arg1, *(arg1 + 0xc) + var_14_1)
            
            int16_t temp7_1 = result.w
            result.w -= 1
            
            if (temp7_1 == 1)
                return sub_441770(arg1, *(arg1 + 0xc) - var_14_1)
            
            int16_t temp9_1 = result.w
            result.w -= 1
            
            if (temp9_1 == 1)
                return sub_441770(arg1, *(arg1 + 0xc) + var_14_1)
    
    return result
}
