// ============================================================
// 函数名称: sub_4a33f0
// 虚拟地址: 0x4a33f0
// WARP GUID: cddc078e-6d01-57f4-9c63-e71ee30fd901
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403430, sub_415d64, sub_40cc98, sub_403010
// [被调用的父级函数]: sub_4a5584, sub_4a74c0, sub_4aad4c
// ============================================================

int32_t __convention("regparm")sub_4a33f0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* ebp
    int32_t* ebp
    int32_t* var_4 = ebp
    sub_403430(arg1, arg2)
    arg2.b = arg2.b
    arg2.b &= 0xfc
    sub_415d64(arg1, arg2)
    (**data_53258c)()
    var_4 = &var_4
    int32_t (* var_8_1)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp0 = data_52fc20
    data_52fc20 -= 1
    
    if (add_overflow(temp0, 0xffffffff))
        sub_403010()
        noreturn
    
    if (data_52fc20 == 0)
        sub_40cc98(data_5308e0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    var_4 = sub_4a3466
    return (*(*data_53258c + 4))(var_4)
}
