// ============================================================
// 函数名称: sub_4060e7
// 虚拟地址: 0x4060e7
// WARP GUID: 216ccf72-7f71-598a-97c1-b5261f4167d4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40605c, j_sub_406190, sub_402844
// [被调用的父级函数]: sub_4060d0, sub_4060db
// ============================================================

void __convention("regparm")sub_4060e7(void* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t esi = arg3
    char* edi = arg2
    
    if (*(ebx + 4) != 0xd7b1 && arg1 == &data_531050)
        j_sub_406190()
    
    if (*(ebx + 4) != 0xd7b1 && (arg1 != &data_531050 || *(ebx + 4) != 0xd7b1))
        sub_402844(0x68)
    else if (esi s> 0)
        int32_t edx = *(ebx + 0xc)
        int32_t ecx_1 = *(ebx + 0x10) - edx
        char* edx_1 = edx + *(ebx + 0x14)
        
        while (true)
            int32_t temp0_1 = ecx_1
            ecx_1 -= 1
            
            if (temp0_1 s< 1)
                *(ebx + 0xc) = edx_1
                arg1 = sub_40605c(ebx)
                int32_t edx_3 = *(ebx + 0xc)
                ecx_1 = *(ebx + 0x10) - edx_3
                edx_1 = edx_3 + *(ebx + 0x14)
            else
                arg1.b = *edx_1
                edx_1 = &edx_1[1]
            
            if (arg1.b == 0x1a)
                break
            
            if (arg1.b == 0xd)
                edx_1 -= 1
            else
                *edi = arg1.b
                edi = &edi[1]
                int32_t temp1_1 = esi
                esi -= 1
                
                if (temp1_1 s> 1)
                    continue
            
            *(ebx + 0xc) = edx_1 - *(ebx + 0x14)
            break
}
