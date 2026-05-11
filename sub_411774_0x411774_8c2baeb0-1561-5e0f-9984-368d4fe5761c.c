// ============================================================
// 函数名称: sub_411774
// 虚拟地址: 0x411774
// WARP GUID: 8c2baeb0-1561-5e0f-9984-368d4fe5761c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_411770, sub_403828, sub_40b4ec
// [被调用的父级函数]: sub_4117ac, sub_425418, sub_425374
// ============================================================

void __fastcallsub_411774(int32_t arg1, int32_t arg2) __noreturn
{
    // 第一条实际指令: void* ebp
    void* ebp
    int32_t var_14 = sub_411770(ebp)
    int32_t var_10 = arg1
    char var_c = 0
    int32_t* var_18 = &var_10
    int32_t ecx = arg2
    arg2.b = 1
    sub_40b4ec(0x40ea30, arg2, ecx, 0)
    noreturn sub_403828() __tailcall
}
