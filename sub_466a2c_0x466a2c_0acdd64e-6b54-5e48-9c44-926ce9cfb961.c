// ============================================================
// 函数名称: sub_466a2c
// 虚拟地址: 0x466a2c
// WARP GUID: 0acdd64e-6b54-5e48-9c44-926ce9cfb961
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41bd08, sub_405ae8, sub_454878, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_466a2c()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    char* var_8 = nullptr
    int32_t var_c = 0
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp0 = data_532084
    data_532084 -= 1
    
    if (temp0 u< 1)
        sub_454878()
        sub_405ae8(data_52ff5c, &var_8)
        void* ebp_2 = sub_41bd08(var_8, "jpeg", 0x453344)
        sub_405ae8(data_52ff5c, ebp_2 - 8)
        ebp_1 = sub_41bd08(*(ebp_2 - 8), 0x466ad8, 0x453344)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_466abb
    return sub_403e1c(&ebp_1[-2], 2)
}
