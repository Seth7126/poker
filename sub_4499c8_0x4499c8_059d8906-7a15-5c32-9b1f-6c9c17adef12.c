// ============================================================
// 函数名称: sub_4499c8
// 虚拟地址: 0x4499c8
// WARP GUID: 059d8906-7a15-5c32-9b1f-6c9c17adef12
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: WaitMessage
// [内部子函数调用]: sub_428bd4, sub_449ec0, sub_449b74, sub_447ca8, sub_449944, sub_4498e0, sub_403e1c
// [被调用的父级函数]: sub_449234
// ============================================================

int32_t __convention("regparm")sub_4499c8(BOOL arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    char* var_10 = nullptr
    struct _EXCEPTION_REGISTRATION_RECORD* var_14 = nullptr
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    HANDLE eax_1 = sub_449944(arg1)
    
    if (*(arg1 + 0x78) != 0 && *(arg1 + 0x3c) == 0)
        sub_449ec0(arg1)
    
    sub_447ca8(eax_1, &var_14)
    sub_428bd4(var_14, &var_10)
    sub_449b74(data_5317d8, var_10)
    char var_9 = 1
    int32_t* var_30 = &var_4
    int32_t (* var_34)() = j_sub_403668
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0xda) != 0)
        *(arg1 + 0xdc)
        (*(arg1 + 0xd8))()
        esp = &var_14
    
    if (var_9 != 0)
        sub_4498e0()
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    
    if (var_9 != 0)
        WaitMessage()
    
    esp[5]
    fsbase->NtTib.ExceptionList = esp[3]
    esp[5] = sub_449aca
    return sub_403e1c(&var_14, 2)
}
