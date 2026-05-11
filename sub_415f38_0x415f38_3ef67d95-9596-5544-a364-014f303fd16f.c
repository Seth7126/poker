// ============================================================
// 函数名称: sub_415f38
// 虚拟地址: 0x415f38
// WARP GUID: 3ef67d95-9596-5544-a364-014f303fd16f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_415eb8, sub_4163fc
// [被调用的父级函数]: sub_415f70, sub_415d64
// ============================================================

int32_t* __convention("regparm")sub_415f38(int32_t* arg1, void** arg2)
{
    // 第一条实际指令: arg2[2]
    arg2[2]
    (*(*arg1 + 0x20))(0)
    int32_t ecx_1
    ecx_1.b = 1
    (*(*arg1 + 0x10))()
    sub_4163fc(arg2, 0)
    return sub_415eb8(arg1, arg2)
}
