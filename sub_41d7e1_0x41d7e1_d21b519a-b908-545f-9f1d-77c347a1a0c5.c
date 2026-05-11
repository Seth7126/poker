// ============================================================
// 函数名称: sub_41d7e1
// 虚拟地址: 0x41d7e1
// WARP GUID: d21b519a-b908-545f-9f1d-77c347a1a0c5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ReleaseDC, SelectObject, DeleteDC, GetObjectA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41d214
// ============================================================

int32_tsub_41d7e1(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, HGDIOBJ arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    SelectObject(arg1[-7], arg1[-5])
    fsbase->NtTib.ExceptionList = arg3
    fsbase->NtTib.ExceptionList = arg5
    DeleteDC(arg1[-7])
    ReleaseDC(nullptr, arg1[-6])
    
    if (arg1[-4] != 0)
        GetObjectA(arg1[-4], 0x54, arg1[3])
    
    *arg1
    return arg1[-4]
}
