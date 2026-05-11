// ============================================================
// 函数名称: sub_4b0000
// 虚拟地址: 0x4b0000
// WARP GUID: 3312dce7-26ef-54d5-ab2b-b11596a5505e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4b0fd8
// [被调用的父级函数]: sub_4b008c
// ============================================================

int32_t __fastcallsub_4b0000(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    int32_t eax
    int32_t var_8_1 = eax
    char eax_2
    void* ebp
    eax_2, ebp = sub_4b0fd8(arg2)
    
    if (eax_2 == 0)
        (*(**(ebp - 4) + 0x58))()
    
    (*(**(ebp - 4) + 0x4c))()
    char result = (*(**(ebp - 4) + 0x54))()
    
    if (result == 0)
        int32_t (* var_1c_1)() = j_sub_403668
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        *(*(ebp - 4) + 0x140)
        (*(**(ebp - 4) + 0x94))(ExceptionList, var_1c_1, ebp)
        result = 0
        fsbase->NtTib.ExceptionList = ExceptionList
    
    return result
}
