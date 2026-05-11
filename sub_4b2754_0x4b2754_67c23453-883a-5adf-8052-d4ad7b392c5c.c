// ============================================================
// 函数名称: sub_4b2754
// 虚拟地址: 0x4b2754
// WARP GUID: 67c23453-883a-5adf-8052-d4ad7b392c5c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InitCommonControls
// [内部子函数调用]: sub_4201d4
// [被调用的父级函数]: sub_4b2840
// ============================================================

int32_tsub_4b2754()
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    int32_t var_4 = entry_ebx
    int32_t var_c = 8
    int32_t eax
    int32_t var_8 = eax
    int32_t result = neg.d(sbb.d(entry_ebx, entry_ebx, sub_4201d4(&var_c) != 0))
    
    if (result.b == 0)
        InitCommonControls()
    
    return result
}
