// ============================================================
// 函数名称: sub_49b6f8
// 虚拟地址: 0x49b6f8
// WARP GUID: 0640384b-37ca-5d93-aaa6-4c43e7b0add6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49b454
// [被调用的父级函数]: sub_49b734
// ============================================================

int32_tsub_49b6f8()
{
    // 第一条实际指令: int32_t __saved_ecx
    int32_t __saved_ecx
    int32_t eax
    int32_t result
    void* edx
    void* ebp
    result, ebp = sub_49b454(eax, edx, 0, nullptr, &__saved_ecx:3, 0, 0, 0)
    result.b = *(ebp - 1)
    return result
}
