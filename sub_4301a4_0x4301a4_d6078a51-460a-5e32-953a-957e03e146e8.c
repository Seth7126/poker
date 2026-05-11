// ============================================================
// 函数名称: sub_4301a4
// 虚拟地址: 0x4301a4
// WARP GUID: d6078a51-460a-5e32-953a-957e03e146e8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403260, sub_41622c
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4301a4(void* arg1, void* arg2, void** arg3)
{
    // 第一条实际指令: void* result = sub_41622c(*(arg1 + 4), arg2)
    void* result = sub_41622c(*(arg1 + 4), arg2)
    sub_403260(result, &data_4279b4)
    *arg3 = result
    return result
}
