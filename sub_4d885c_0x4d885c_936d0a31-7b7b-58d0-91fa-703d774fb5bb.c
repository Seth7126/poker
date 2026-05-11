// ============================================================
// 函数名称: sub_4d885c
// 虚拟地址: 0x4d885c
// WARP GUID: 936d0a31-7b7b-58d0-91fa-703d774fb5bb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_51d580, sub_40401c, sub_47a9e0, sub_403df8, sub_51d840, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b, sub_4d81c8
// ============================================================

int32_t*sub_4d885c()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t* var_c = &var_4
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool o = unimplemented  {imul edx, edx, 0x33}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t ecx
    sub_40401c(ecx, zx.d(*(data_780c58 + 4)) * 0x33 + &data_7806f0)
    sub_51d840(data_780c60, var_8)
    void* ebp_1 = sub_51d580(data_780c60)
    sub_47a9e0(data_61cb54, data_61cb28, data_61c8c8, 1)
    sub_47a9e0(data_61cb58, data_61cb28, data_61c8c8, 1)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_c_1)(int32_t arg1) = sub_4d88f5
    sub_403df8(ebp_1 - 4)
    return ebp_1 - 4
}
