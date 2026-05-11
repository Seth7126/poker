// ============================================================
// 函数名称: sub_49af67
// 虚拟地址: 0x49af67
// WARP GUID: 11301f6a-4c02-58d9-a4d5-733f45ce4009
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49af78
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_49af67(char* arg1, int32_t arg2, int32_t* arg3, char* arg4 @ esi, char* arg5 @ edi)
{
    // 第一条实际指令: *arg3 -= 1
    *arg3 -= 1
    *arg1 += arg1.b
    *arg3 += arg2:1.b
    arg2:1.b ^= *arg5
    char* cs
    *(cs + arg4) ^= arg3:1.b
    *arg4 ^= arg3:1.b
    *arg1 ^= arg1
    *arg1 += arg1.b
    return sub_49af78(arg3, arg2) __tailcall
}
