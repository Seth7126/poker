// ============================================================
// 函数名称: sub_4060db
// 虚拟地址: 0x4060db
// WARP GUID: 671f3ed9-7ee2-5616-8a4e-9a4d50c8cee5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4060e7
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_4060db(int32_t arg1, char* arg2)
{
    // 第一条实际指令: void* eax
    void* eax
    int32_t result
    int32_t ecx
    result, ecx = sub_4060e7(eax, arg2, arg1)
    arg2[ecx] = 0
    return result
}
