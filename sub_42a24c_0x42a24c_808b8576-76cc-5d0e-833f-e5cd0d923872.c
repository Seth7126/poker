// ============================================================
// 函数名称: sub_42a24c
// 虚拟地址: 0x42a24c
// WARP GUID: 808b8576-76cc-5d0e-833f-e5cd0d923872
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_4106bc
// [被调用的父级函数]: sub_42e664
// ============================================================

void* const __convention("regparm")sub_42a24c(int32_t* arg1)
{
    // 第一条实际指令: sub_4106bc(*arg1)
    sub_4106bc(*arg1)
    void* const result = *arg1
    
    if (*(result + 8) == 0)
        sub_4030d0(*arg1)
        result = nullptr
        *arg1 = 0
    
    return result
}
