// ============================================================
// 函数名称: sub_462648
// 虚拟地址: 0x462648
// WARP GUID: 97a994f2-4527-505b-b166-e2e50455ad89
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_462608
// ============================================================

void __thiscallsub_462648(int32_t* arg1, int32_t* arg2 @ eax, int32_t arg3)
{
    // 第一条实际指令: int32_t* esi = arg2
    int32_t* esi = arg2
    int32_t edx
    int32_t var_8 = edx
    void* ebx = *(esi + 0x145)
    
    while (*(ebx + 8) u< *(esi + 0xe5))
        if (*(ebx + 0xc) u< 8)
            (*(*(esi + 0x149) + 4))(8, ebx + 0xc, ebx + 0x18, arg3)
        
        if (*(ebx + 0xc) != 8)
            break
        
        if ((*(*(esi + 0x14d) + 4))() == 0)
            if (*(ebx + 0x10) == 0)
                *arg1 -= 1
                *(ebx + 0x10) = 1
            
            break
        
        if (*(ebx + 0x10) != 0)
            *arg1 += 1
            *(ebx + 0x10) = 0
        
        *(ebx + 0xc) = 0
        *(ebx + 8) += 1
}
