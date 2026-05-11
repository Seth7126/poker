// ============================================================
// 函数名称: sub_403f10
// 虚拟地址: 0x403f10
// WARP GUID: b18583d5-e24f-5efa-afd2-9f6d55209121
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: WideCharToMultiByte
// [内部子函数调用]: sub_403ee0, sub_403df8
// [被调用的父级函数]: sub_404040, sub_403fe0
// ============================================================

int32_t* __convention("regparm")sub_403f10(int32_t* arg1, wchar16* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* result
    int32_t* result
    
    if (arg3 s> 0)
        void multiByteStr
        int32_t eax
        
        if (arg3 s< 0x400)
            eax = WideCharToMultiByte(0, 0, arg2, arg3, &multiByteStr, 0x800, nullptr, nullptr)
        
        if (arg3 s>= 0x400 || eax s<= 0)
            int32_t cbMultiByte = WideCharToMultiByte(0, 0, arg2, arg3, nullptr, 0, nullptr, nullptr)
            sub_403ee0(arg1, 0, cbMultiByte)
            return WideCharToMultiByte(0, 0, arg2, arg3, *arg1, cbMultiByte, nullptr, nullptr)
        
        result = arg1
        sub_403ee0(result, &multiByteStr, eax)
    else
        result = arg1
        sub_403df8(result)
    
    return result
}
