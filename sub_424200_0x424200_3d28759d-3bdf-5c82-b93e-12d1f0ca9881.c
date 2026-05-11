// ============================================================
// 函数名称: sub_424200
// 虚拟地址: 0x424200
// WARP GUID: 3d28759d-3bdf-5c82-b93e-12d1f0ca9881
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b6fc, sub_4095ac, sub_409440, sub_4095f8, sub_42b6ec, sub_4095c0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_424200(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t (* ebp)(void* arg1, void* arg2)
    int32_t (* ebp)(void* arg1, void* arg2)
    int32_t (* var_4)(void* arg1, void* arg2) = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg2
    int32_t eax_1 = (*(*arg1 + 0xbc))()
    int32_t var_c = (*(*arg1 + 0xb8))()
    sub_42b6ec()
    void* eax_5 = sub_4095ac(1)
    __return_addr = &var_4
    var_4 = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_42b6fc(sub_4095c0(eax_5), eax_5)
    
    if (arg3 s<= var_c)
        var_c = arg3 - 1
    
    sub_409440(ExceptionList, eax_5 + eax_1, var_c)
    fsbase->NtTib.ExceptionList = ExceptionList
    __return_addr = sub_424291
    return sub_4095f8(eax_5)
}
