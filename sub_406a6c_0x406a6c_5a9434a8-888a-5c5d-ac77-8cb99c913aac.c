// ============================================================
// 函数名称: sub_406a6c
// 虚拟地址: 0x406a6c
// WARP GUID: 5a9434a8-888a-5c5d-ac77-8cb99c913aac
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4050e8, sub_401b84, sub_405f4c
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_406a6c()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_8 = &__saved_ebp
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_53142c
    data_53142c += 1
    
    if (temp1 == 0xffffffff)
        sub_405f4c(&data_531050)
        sub_405f4c(0x53121c)
        sub_401b84()
        sub_4050e8(&data_531414)
        sub_4050e8(&data_531404)
        sub_4050e8(&data_5313f4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
