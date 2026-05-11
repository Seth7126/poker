// ============================================================
// 函数名称: sub_43ca8c
// 虚拟地址: 0x43ca8c
// WARP GUID: 4d5b572c-f815-5cfb-8a71-b9f743ffd807
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_43ca8c(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 != arg1[0xc].b)
    if (arg2 != arg1[0xc].b)
        arg1[0xc].b = arg2
        (*(*arg1 + 0x38))()
}
