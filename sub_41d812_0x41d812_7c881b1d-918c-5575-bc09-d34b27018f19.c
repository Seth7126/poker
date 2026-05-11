// ============================================================
// 函数名称: sub_41d812
// 虚拟地址: 0x41d812
// WARP GUID: 7c881b1d-918c-5575-bc09-d34b27018f19
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ReleaseDC, DeleteObject, DeleteDC, GetObjectA
// [内部子函数调用]: sub_403844, sub_403898
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_41d812(int32_t* arg1 @ ebp, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: DeleteObject(arg1[-4])
    DeleteObject(arg1[-4])
    sub_403844()
    sub_403898(arg2)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg2
    DeleteDC(arg1[-7])
    ReleaseDC(nullptr, arg1[-6])
    
    if (arg1[-4] != 0)
        GetObjectA(arg1[-4], 0x54, arg1[3])
    
    *arg1
    return arg1[-4]
}
