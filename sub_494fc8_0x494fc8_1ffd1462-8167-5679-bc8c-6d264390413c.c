// ============================================================
// 函数名称: sub_494fc8
// 虚拟地址: 0x494fc8
// WARP GUID: 1ffd1462-8167-5679-bc8c-6d264390413c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: WSACleanup
// [内部子函数调用]: sub_403828, sub_40b5a8, sub_403df8, sub_40ac70
// [被调用的父级函数]: sub_4950e0
// ============================================================

int32_t*sub_494fc8()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_24 = ebx
    int32_t var_20 = 0
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t eax = WSACleanup(ExceptionList, var_2c, var_28)
    int32_t var_8
    
    if (eax == 0)
        fsbase->NtTib.ExceptionList = var_8
        __return_addr = sub_49504e
        int32_t* result = &var_20
        sub_403df8(result)
        return result
    
    sub_40ac70(eax, &var_20)
    int32_t var_1c = var_20
    char var_18 = 0xb
    uint32_t var_14 = eax
    char var_10 = 0
    void* const var_c = "WSACleanup"
    var_8.b = 0xb
    var_10.d = 2
    int32_t edx_1
    edx_1.b = 1
    sub_40b5a8(0x4940dc, edx_1, data_530808, var_10, &var_1c)
    sub_403828()
    noreturn
}
