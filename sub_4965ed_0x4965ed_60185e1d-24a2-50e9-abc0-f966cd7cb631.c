// ============================================================
// 函数名称: sub_4965ed
// 虚拟地址: 0x4965ed
// WARP GUID: 60185e1d-24a2-50e9-abc0-f966cd7cb631
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4950e0, sub_403430, sub_403420, sub_4030d0
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_4965ed(int32_t arg1, int32_t arg2, char* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: *arg3 += arg3.b
    *arg3 += arg3.b
    void* entry_ebx
    *(entry_ebx + 0x56) += arg2.b
    sub_403430(arg3, arg2)
    int32_t edx
    edx.b = arg2.b & 0xfc
    sub_4950e0(arg3, edx)
    sub_4030d0(*(arg3 + 0x60))
    sub_4030d0(*(arg3 + 0x64))
    int32_t result = sub_4030d0(*(arg3 + 0x68))
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg3)
}
