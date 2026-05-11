// ============================================================
// 函数名称: sub_42b378
// 虚拟地址: 0x42b378
// WARP GUID: 20242932-61a9-5a88-aa4e-6666eacf5345
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754
// [被调用的父级函数]: sub_42c938, sub_42c820, sub_42f448
// ============================================================

void __fastcallsub_42b378(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: void* ebx = arg3
    void* ebx = arg3
    void* esi = *(ebx + 0x90)
    
    if (esi == 0 || data_531764 != 0)
        return 
    
    arg3.w = 9
    arg3.w = 9 & *(ebx + 0x20)
    
    if (0 != arg3.w)
        return 
    
    int32_t var_14 = arg2
    int32_t var_10_1 = arg1
    int32_t var_c_1 = arg4
    sub_42c754(esi, &var_14)
}
