// ============================================================
// 函数名称: sub_416194
// 虚拟地址: 0x416194
// WARP GUID: a1d6bb1c-abcc-5c2b-a238-8d5e9d963f89
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4089dc, sub_40b5a8, sub_41622c
// [被调用的父级函数]: sub_4432c0
// ============================================================

void __fastcallsub_416194(void* arg1, void* arg2, void* arg3 @ eax, void* arg4)
{
    // 第一条实际指令: if (arg2 != 0 && sub_4089dc(arg1, arg4).b == 0 && arg3 == *(arg2 + 4) && sub_41622c(arg3, arg4) != 0)
    if (arg2 != 0 && sub_4089dc(arg1, arg4).b == 0 && arg3 == *(arg2 + 4)
            && sub_41622c(arg3, arg4) != 0)
        void* var_10 = arg4
        char var_c = 0xb
        void* edx_1
        edx_1.b = 1
        sub_40b5a8(0x40ea90, edx_1, data_5305d0, 0, &var_10)
        sub_403828()
        noreturn
    
    if ((*(arg3 + 0x20) & 0x10) != 0 && *(arg3 + 4) != 0)
        (*(**(arg3 + 4) + 0x20))(arg4)
}
