// ============================================================
// 函数名称: sub_443661
// 虚拟地址: 0x443661
// WARP GUID: 22472edf-ce92-5ebb-83b9-007115df5405
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ReleaseDC
// [内部子函数调用]: sub_4030d0, sub_4318d0
// [被调用的父级函数]: sub_443300
// ============================================================

int32_tsub_443661(int32_t* arg1 @ ebp, int32_t arg2, HWND arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_4030d0(arg1[-3])
    fsbase->NtTib.ExceptionList = arg3
    int32_t result = ReleaseDC(sub_4318d0(arg1[-1]), arg1[-4])
    *arg1
    return result
}
