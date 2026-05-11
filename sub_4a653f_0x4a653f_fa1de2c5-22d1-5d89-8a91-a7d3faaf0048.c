// ============================================================
// 函数名称: sub_4a653f
// 虚拟地址: 0x4a653f
// WARP GUID: fa1de2c5-22d1-5d89-8a91-a7d3faaf0048
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a654c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a653f(char* arg1, void* arg2, void* arg3, char* arg4 @ esi, int32_t* arg5 @ edi)
{
    // 第一条实际指令: *arg5 += 1
    *arg5 += 1
    *arg1 += arg1.b
    *arg1 += arg2:1.b
    char* cs
    *(cs + arg4) ^= arg3:1.b
    *arg4 ^= arg3:1.b
    *arg1 ^= arg1
    return sub_4a654c(arg1, arg2, arg3, arg4, arg5) __tailcall
}
