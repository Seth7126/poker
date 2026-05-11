// ============================================================
// 函数名称: sub_441bb0
// 虚拟地址: 0x441bb0
// WARP GUID: 3f53815a-7b55-50cf-b9b1-5809cb310226
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e994
// [被调用的父级函数]: sub_4443dc, sub_44237c
// ============================================================

void** __fastcallsub_441bb0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* eax
    int32_t* eax
    void** result
    void* ebx_1
    result, ebx_1 = sub_42e994(eax, arg2)
    *(ebx_1 + 0x24) &= 0xfffffffc
    return result
}
