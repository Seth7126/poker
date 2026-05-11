// ============================================================
// 函数名称: sub_404ba0
// 虚拟地址: 0x404ba0
// WARP GUID: a386f6a6-7a61-592c-b0dc-7879501b106b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: WideCharToMultiByte
// [内部子函数调用]: sub_403ee0, sub_403df8
// [被调用的父级函数]: sub_404c2c
// ============================================================

int32_t* __convention("regparm")sub_404ba0(wchar16* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* result
    int32_t* result
    
    if (arg2 != 0)
        if (arg2 s>= 0x400)
            int32_t cbMultiByte = WideCharToMultiByte(0, 0, arg1, arg2, nullptr, 0, nullptr, nullptr)
            sub_403ee0(arg3, 0, cbMultiByte)
            return WideCharToMultiByte(0, 0, arg1, arg2, *arg3, cbMultiByte, nullptr, nullptr)
        
        result = arg3
        void multiByteStr
        sub_403ee0(result, &multiByteStr, 
            WideCharToMultiByte(0, 0, arg1, arg2, &multiByteStr, 0x800, nullptr, nullptr))
    else
        result = arg3
        sub_403df8(result)
    
    return result
}
