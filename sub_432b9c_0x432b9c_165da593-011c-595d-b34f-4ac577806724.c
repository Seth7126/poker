// ============================================================
// 函数名称: sub_432b9c
// 虚拟地址: 0x432b9c
// WARP GUID: 165da593-011c-595d-b34f-4ac577806724
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DrawTextA
// [内部子函数调用]: sub_42b778, sub_42d6dc, sub_4188ec, sub_40423c, sub_419b40, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

uint8_t** __convention("regparm")sub_432b9c(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1c = ebx
    uint8_t* lpchText = nullptr
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0x40))(ExceptionList, var_24, var_20)
    RECT var_14
    var_14.left += 2
    var_14.top += 2
    int32_t ecx_1 = sub_4188ec(*(arg1[0x7c] + 0xc), 0x80000017)
    var_14.right = sub_42d6dc(arg1) | 0x810
    var_14.top = &var_14
    var_14.left = 0xffffffff
    sub_42b778(ecx_1, &lpchText)
    lpchText = sub_40423c(lpchText)
    DrawTextA(sub_419b40(arg1[0x7c]), lpchText, var_14.left, var_14.top, var_14.right)
    fsbase->NtTib.ExceptionList = var_14.bottom
    __return_addr = sub_432c31
    uint8_t** result = &lpchText
    sub_403df8(result)
    return result
}
