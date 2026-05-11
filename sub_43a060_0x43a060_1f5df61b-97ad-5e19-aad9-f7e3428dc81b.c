// ============================================================
// 函数名称: sub_43a060
// 虚拟地址: 0x43a060
// WARP GUID: 1f5df61b-97ad-5e19-aad9-f7e3428dc81b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4160a0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43a060(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_4160a0(arg1, arg2)
    sub_4160a0(arg1, arg2)
    return (*(*arg2 + 4))(0, 0, sub_439e78, arg1)
}
