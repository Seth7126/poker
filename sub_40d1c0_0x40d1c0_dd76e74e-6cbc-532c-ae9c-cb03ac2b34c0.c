// ============================================================
// 函数名称: sub_40d1c0
// 虚拟地址: 0x40d1c0
// WARP GUID: dd76e74e-6cbc-532c-ae9c-cb03ac2b34c0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40d0d3
// [被调用的父级函数]: sub_40d1bb, sub_40d221
// ============================================================

int32_tsub_40d1c0(void* arg1 @ ebp, char* arg2 @ edi)
{
    // 第一条实际指令: int32_t i_4 = *(arg1 + 8)
    int32_t i_4 = *(arg1 + 8)
    
    if (i_4 u>= 0x12)
        i_4 = 0x12
    
    int32_t i_2 = sx.d(*(arg1 - 0x1c))
    char result
    char* esi
    
    if (i_2 s> 0)
        int32_t ebx_1 = 0
        
        if (*(arg1 + 0x10) != 2)
            ebx_1.b = 3
            int16_t eax_1
            eax_1.b = divu.dp.b(i_2.w - 1, 3)
            eax_1:1.b = modu.dp.b(i_2.w - 1, 3)
            ebx_1.b = eax_1:1.b
            ebx_1 += 1
        
        while (true)
            result = sub_40d0d3(esi)
            *arg2 = result
            arg2 = &arg2[1]
            int32_t i_5 = i_2
            i_2 -= 1
            
            if (i_5 == 1)
                break
            
            int32_t temp4_1 = ebx_1
            ebx_1 -= 1
            
            if (temp4_1 == 1)
                *arg2 = data_5314fa
                arg2 = &arg2[1]
                ebx_1.b = 3
    else
        result = 0x30
        *arg2 = 0x30
        arg2 = &arg2[1]
    
    int32_t i_3 = i_4
    
    if (i_3 != 0)
        *arg2 = data_5314fb
        void* edi = &arg2[1]
        
        if (i_2 != 0)
            int32_t i
            
            do
                *edi = 0x30
                edi += 1
                int32_t i_6 = i_3
                i_3 -= 1
                
                if (i_6 == 1)
                    return 0x30
                
                i = i_2
                i_2 += 1
            while (i != 0xffffffff)
        
        int32_t i_1
        
        do
            result = sub_40d0d3(esi)
            *edi = result
            edi += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    return result
}
