// ============================================================
// 函数名称: sub_517880
// 虚拟地址: 0x517880
// WARP GUID: b1b580ef-b0af-5c97-9f49-6dc0d00117ec
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_517744, sub_517b0c, sub_51763c, sub_403010
// [被调用的父级函数]: sub_4bca48, sub_4bf070
// ============================================================

int32_t __convention("regparm")sub_517880(void* arg1, char arg2)
{
    // 第一条实际指令: void* eax_1
    void* eax_1
    eax_1.b = *(*data_5301f4 + 4)
    eax_1.b -= 5
    char temp0 = eax_1.b
    eax_1.b -= 2
    int32_t result
    
    if (temp0 u>= 2)
        int32_t edi_1 = 1
        
        do
            if (arg2 != *(arg1 + (edi_1 << 2) - 3))
                if (arg2 != 6)
                    goto label_517926
                
                goto label_517910
            
            if (sub_517744(*(arg1 + (edi_1 << 2) - 4)) == 0 || arg2 == 6)
            label_517910:
                
                if (arg2 == 6 && sub_517744(*(arg1 + (edi_1 << 2) - 4)) == 0)
                    goto label_517926
            else
            label_517926:
                sub_517b0c(arg1, edi_1)
                int32_t temp1_1 = edi_1
                edi_1 -= 1
                
                if (add_overflow(temp1_1, 0xffffffff))
                    sub_403010()
                    noreturn
            
            int32_t temp3_1 = edi_1
            edi_1 += 1
            
            if (add_overflow(temp3_1, 1))
                sub_403010()
                noreturn
            
            result = sx.d(*(arg1 + 0x100))
        while (edi_1 s<= result)
    else
        int32_t edi = 1
        
        do
            if (arg2 != *(arg1 + (edi << 2) - 3))
                if (arg2 != 6)
                    goto label_5178cd
                
                goto label_5178b7
            
            if (sub_51763c(*(arg1 + (edi << 2) - 4)) == 0 || arg2 == 6)
            label_5178b7:
                
                if (arg2 == 6 && sub_51763c(*(arg1 + (edi << 2) - 4)) == 0)
                    goto label_5178cd
            else
            label_5178cd:
                sub_517b0c(arg1, edi)
                int32_t temp2_1 = edi
                edi -= 1
                
                if (add_overflow(temp2_1, 0xffffffff))
                    sub_403010()
                    noreturn
            
            int32_t temp4_1 = edi
            edi += 1
            
            if (add_overflow(temp4_1, 1))
                sub_403010()
                noreturn
            
            result = sx.d(*(arg1 + 0x100))
        while (edi s<= result)
    
    return result
}
