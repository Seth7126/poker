// ============================================================
// 函数名称: sub_44678c
// 虚拟地址: 0x44678c
// WARP GUID: 56acfb03-b426-577c-87dd-8c798be22de9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403248, sub_42e7fc, sub_42e838, sub_44678c, sub_44675c
// [被调用的父级函数]: sub_44678c, sub_446808
// ============================================================

int32_t __convention("regparm")sub_44678c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (*(arg1 + 0x168) != 0)
        int32_t esi_2 = sub_42e838(arg1) - 1
        
        if (esi_2 s>= 0)
            int32_t i_1 = esi_2 + 1
            int32_t edi_1 = 0
            int32_t i
            
            do
                int32_t* eax_4
                void* edx_2
                eax_4, edx_2 = sub_42e7fc(arg1, edi_1)
                char eax_7
                
                if (*(eax_4 + 0x47) != 0)
                    int32_t var_18_1 = arg2
                    eax_7 = sub_44675c(eax_4, edx_2)
                
                if (*(eax_4 + 0x47) != 0 && eax_7 != 0)
                    return 1
                
                if (sub_403248(eax_4, 0x427f2c) != 0)
                    eax_7 = sub_44678c(arg2)
                    
                    if (eax_7 != 0)
                        return 1
                
                edi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return 0
}
