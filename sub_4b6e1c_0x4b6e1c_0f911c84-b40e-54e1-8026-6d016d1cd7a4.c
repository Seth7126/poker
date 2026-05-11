// ============================================================
// 函数名称: sub_4b6e1c
// 虚拟地址: 0x4b6e1c
// WARP GUID: 0f911c84-b40e-54e1-8026-6d016d1cd7a4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FreeLibrary, SendMessageA
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_4b6e1c()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_8 = &__saved_ebp
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_532f04
    data_532f04 += 1
    
    if (temp1 == 0xffffffff)
        if (data_532f08 != 0)
            SendMessageA(data_532f08, 0x10, 0, 0)
        
        if (data_532f0c != 0)
            FreeLibrary(data_532f0c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
