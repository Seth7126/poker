// ============================================================
// 函数名称: sub_44c1b7
// 虚拟地址: 0x44c1b7
// WARP GUID: b07d7a0b-4e39-5f5f-9c70-915e73cdf37f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_44c1b7(char* arg1, char arg2, int32_t* arg3, char* arg4 @ edi)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg4 += arg2
    *arg1 += arg1.b
    arg1[0x207] = arg2
    return (*(*arg1 + 0x74))()
}
