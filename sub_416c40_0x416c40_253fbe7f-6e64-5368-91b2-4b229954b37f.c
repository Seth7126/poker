// ============================================================
// 函数名称: sub_416c40
// 虚拟地址: 0x416c40
// WARP GUID: 253fbe7f-6e64-5368-91b2-4b229954b37f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410948, sub_410524, sub_4030d0, sub_4108e4
// [被调用的父级函数]: sub_416cb4
// ============================================================

int32_tsub_416c40()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t edi
    int32_t var_10 = edi
    int32_t* eax_1 = sub_4108e4(data_53162c)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx_2 = eax_1[2] - 1
    
    if (ebx_2 s>= 0)
        int32_t i_1 = ebx_2 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            sub_4030d0(sub_410524(eax_1, esi_1))
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_416c9c
    return sub_410948(data_53162c)
}
