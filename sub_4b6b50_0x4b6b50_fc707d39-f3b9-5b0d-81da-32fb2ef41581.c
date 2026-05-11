// ============================================================
// 函数名称: sub_4b6b50
// 虚拟地址: 0x4b6b50
// WARP GUID: fc707d39-f3b9-5b0d-81da-32fb2ef41581
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_416764, sub_4b5c08, sub_405b40, sub_4b6dac
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b6b50(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    sub_405b40(arg1 + 0x20)
    int32_t edx
    edx.b = 1
    struct _EXCEPTION_REGISTRATION_RECORD* eax_1 = sub_416764(arg2, edx, &data_40f5ec, 0)
    
    if (eax_1 != 0)
        eax_1 -= 0xffffffec
    
    return sub_4b5c08(sub_4b6dac(eax_1, 0, 0xffffffff, arg1 + 0x20, 0x4b6b90))
}
