// ============================================================
// 函数名称: sub_431df4
// 虚拟地址: 0x431df4
// WARP GUID: 7332aef8-37c8-5bd2-8a18-809c47dbbea2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_431ce8
// [被调用的父级函数]: sub_445760, sub_445a38
// ============================================================

int32_t* __fastcallsub_431df4(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t esi
    int32_t var_8 = esi
    char var_c = arg3.b
    int32_t edx
    edx.b = arg3.b ^ 1
    int32_t var_10 = edx
    int32_t* esp = &var_10
    struct _EXCEPTION_REGISTRATION_RECORD* eax
    int32_t* result = sub_431ce8(eax, arg2, arg1, var_10.b, var_c)
    
    if (result != 0)
        result = (*(*result + 0xb0))()
        esp = &var_8
    
    *esp
    esp[1]
    return result
}
