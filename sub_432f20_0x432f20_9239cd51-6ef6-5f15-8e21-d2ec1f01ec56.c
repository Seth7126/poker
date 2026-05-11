// ============================================================
// 函数名称: sub_432f20
// 虚拟地址: 0x432f20
// WARP GUID: 9239cd51-6ef6-5f15-8e21-d2ec1f01ec56
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_SetDragCursorImage, ImageList_GetDragImage, ImageList_Destroy, ImageList_Create
// [内部子函数调用]: sub_44763c, sub_420240
// [被调用的父级函数]: sub_43304c, sub_433034
// ============================================================

void __convention("regparm")sub_432f20(void* arg1, int32_t arg2 @ ebp)
{
    // 第一条实际指令: if (*(arg1 + 0x60) == 0xffff)
    if (*(arg1 + 0x60) == 0xffff)
        return 
    
    POINT var_10
    var_10.x = (*data_5302cc)(0xe, 1, 1, 1)
    var_10.x = (*data_5302cc)(0xd, var_10.x)
    enum IMAGELIST_CREATION_FLAGS ExceptionList =
        ImageList_Create(var_10.x, var_10.y, ExceptionList, arg2, __return_addr)
    int32_t __saved_ebp
    __return_addr = &__saved_ebp
    int32_t (* __saved_ebp_1)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    HICON eax_9 = sub_44763c(*data_530a18, sx.d(*(arg1 + 0x60)))
    sub_420240(ExceptionList, eax_9)
    HICON eax_13 = sub_44763c(*data_530a18, sx.d(*(arg1 + 0x60)))
    sub_420240(ExceptionList, eax_13)
    __builtin_memset(&var_10, 0, 8)
    ImageList_SetDragCursorImage(ExceptionList, 0, var_10.x, var_10.y)
    var_10.y = &var_10
    var_10.x = 0
    ImageList_GetDragImage(var_10.x, var_10.y)
    var_10.y = var_10.y
    var_10.x = var_10.x
    ImageList_SetDragCursorImage(ExceptionList, 1, var_10.x, var_10.y)
    fsbase->NtTib.ExceptionList = ExceptionList
    __return_addr = &data_432fe7
    ImageList_Destroy(ExceptionList)
}
